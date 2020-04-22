from __future__ import unicode_literals
from django.utils import timezone
from django.contrib.auth import get_user_model
from django.db import models

# Create your models here.
class Post(models.Model):
    objects = models.Manager() 
    course = models.ForeignKey('Course', on_delete = models.CASCADE)
    user = models.ForeignKey('auth.User', on_delete = models.CASCADE)
    date = models.DateTimeField(default=timezone.now)
    content = models.TextField()

class Course(models.Model):
    objects = models.Manager() 
    name = models.CharField(max_length=100)
    prof = models.CharField(max_length=100)
    dep = models.CharField(max_length=100)