# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from ros_mscl/GetSoftIronMatrixRequest.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class GetSoftIronMatrixRequest(genpy.Message):
  _md5sum = "d41d8cd98f00b204e9800998ecf8427e"
  _type = "ros_mscl/GetSoftIronMatrixRequest"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """"""
  __slots__ = []
  _slot_types = []

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(GetSoftIronMatrixRequest, self).__init__(*args, **kwds)

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      pass
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      pass
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from ros_mscl/GetSoftIronMatrixResponse.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg

class GetSoftIronMatrixResponse(genpy.Message):
  _md5sum = "028ca441ebb3dc279988e1ab8c3f73cf"
  _type = "ros_mscl/GetSoftIronMatrixResponse"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """geometry_msgs/Vector3 soft_iron_1
geometry_msgs/Vector3 soft_iron_2
geometry_msgs/Vector3 soft_iron_3
bool success


================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 
# It is only meant to represent a direction. Therefore, it does not
# make sense to apply a translation to it (e.g., when applying a 
# generic rigid transformation to a Vector3, tf2 will only apply the
# rotation). If you want your data to be translatable too, use the
# geometry_msgs/Point message instead.

float64 x
float64 y
float64 z"""
  __slots__ = ['soft_iron_1','soft_iron_2','soft_iron_3','success']
  _slot_types = ['geometry_msgs/Vector3','geometry_msgs/Vector3','geometry_msgs/Vector3','bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       soft_iron_1,soft_iron_2,soft_iron_3,success

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(GetSoftIronMatrixResponse, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.soft_iron_1 is None:
        self.soft_iron_1 = geometry_msgs.msg.Vector3()
      if self.soft_iron_2 is None:
        self.soft_iron_2 = geometry_msgs.msg.Vector3()
      if self.soft_iron_3 is None:
        self.soft_iron_3 = geometry_msgs.msg.Vector3()
      if self.success is None:
        self.success = False
    else:
      self.soft_iron_1 = geometry_msgs.msg.Vector3()
      self.soft_iron_2 = geometry_msgs.msg.Vector3()
      self.soft_iron_3 = geometry_msgs.msg.Vector3()
      self.success = False

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_9dB().pack(_x.soft_iron_1.x, _x.soft_iron_1.y, _x.soft_iron_1.z, _x.soft_iron_2.x, _x.soft_iron_2.y, _x.soft_iron_2.z, _x.soft_iron_3.x, _x.soft_iron_3.y, _x.soft_iron_3.z, _x.success))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.soft_iron_1 is None:
        self.soft_iron_1 = geometry_msgs.msg.Vector3()
      if self.soft_iron_2 is None:
        self.soft_iron_2 = geometry_msgs.msg.Vector3()
      if self.soft_iron_3 is None:
        self.soft_iron_3 = geometry_msgs.msg.Vector3()
      end = 0
      _x = self
      start = end
      end += 73
      (_x.soft_iron_1.x, _x.soft_iron_1.y, _x.soft_iron_1.z, _x.soft_iron_2.x, _x.soft_iron_2.y, _x.soft_iron_2.z, _x.soft_iron_3.x, _x.soft_iron_3.y, _x.soft_iron_3.z, _x.success,) = _get_struct_9dB().unpack(str[start:end])
      self.success = bool(self.success)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_9dB().pack(_x.soft_iron_1.x, _x.soft_iron_1.y, _x.soft_iron_1.z, _x.soft_iron_2.x, _x.soft_iron_2.y, _x.soft_iron_2.z, _x.soft_iron_3.x, _x.soft_iron_3.y, _x.soft_iron_3.z, _x.success))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.soft_iron_1 is None:
        self.soft_iron_1 = geometry_msgs.msg.Vector3()
      if self.soft_iron_2 is None:
        self.soft_iron_2 = geometry_msgs.msg.Vector3()
      if self.soft_iron_3 is None:
        self.soft_iron_3 = geometry_msgs.msg.Vector3()
      end = 0
      _x = self
      start = end
      end += 73
      (_x.soft_iron_1.x, _x.soft_iron_1.y, _x.soft_iron_1.z, _x.soft_iron_2.x, _x.soft_iron_2.y, _x.soft_iron_2.z, _x.soft_iron_3.x, _x.soft_iron_3.y, _x.soft_iron_3.z, _x.success,) = _get_struct_9dB().unpack(str[start:end])
      self.success = bool(self.success)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_9dB = None
def _get_struct_9dB():
    global _struct_9dB
    if _struct_9dB is None:
        _struct_9dB = struct.Struct("<9dB")
    return _struct_9dB
class GetSoftIronMatrix(object):
  _type          = 'ros_mscl/GetSoftIronMatrix'
  _md5sum = '028ca441ebb3dc279988e1ab8c3f73cf'
  _request_class  = GetSoftIronMatrixRequest
  _response_class = GetSoftIronMatrixResponse
