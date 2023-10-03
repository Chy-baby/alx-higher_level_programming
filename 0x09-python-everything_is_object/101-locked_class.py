#!/usr/bin/python3
"""Defines a locked class."""


class LockedClass:
    """
    Ensure that users can only create new attributes
    with the name 'first_name' in the LockedClass.
    """

    __slots__ = ["first_name"]
