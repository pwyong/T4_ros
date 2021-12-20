// Auto-generated. Do not edit!

// (in-package sbus_serial.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class Sbus {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.rawChannels = null;
      this.mappedChannels = null;
      this.failsafe = null;
      this.frame_lost = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('rawChannels')) {
        this.rawChannels = initObj.rawChannels
      }
      else {
        this.rawChannels = new Array(16).fill(0);
      }
      if (initObj.hasOwnProperty('mappedChannels')) {
        this.mappedChannels = initObj.mappedChannels
      }
      else {
        this.mappedChannels = new Array(16).fill(0);
      }
      if (initObj.hasOwnProperty('failsafe')) {
        this.failsafe = initObj.failsafe
      }
      else {
        this.failsafe = false;
      }
      if (initObj.hasOwnProperty('frame_lost')) {
        this.frame_lost = initObj.frame_lost
      }
      else {
        this.frame_lost = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type Sbus
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Check that the constant length array field [rawChannels] has the right length
    if (obj.rawChannels.length !== 16) {
      throw new Error('Unable to serialize array field rawChannels - length must be 16')
    }
    // Serialize message field [rawChannels]
    bufferOffset = _arraySerializer.int16(obj.rawChannels, buffer, bufferOffset, 16);
    // Check that the constant length array field [mappedChannels] has the right length
    if (obj.mappedChannels.length !== 16) {
      throw new Error('Unable to serialize array field mappedChannels - length must be 16')
    }
    // Serialize message field [mappedChannels]
    bufferOffset = _arraySerializer.int16(obj.mappedChannels, buffer, bufferOffset, 16);
    // Serialize message field [failsafe]
    bufferOffset = _serializer.bool(obj.failsafe, buffer, bufferOffset);
    // Serialize message field [frame_lost]
    bufferOffset = _serializer.bool(obj.frame_lost, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type Sbus
    let len;
    let data = new Sbus(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [rawChannels]
    data.rawChannels = _arrayDeserializer.int16(buffer, bufferOffset, 16)
    // Deserialize message field [mappedChannels]
    data.mappedChannels = _arrayDeserializer.int16(buffer, bufferOffset, 16)
    // Deserialize message field [failsafe]
    data.failsafe = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [frame_lost]
    data.frame_lost = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    return length + 66;
  }

  static datatype() {
    // Returns string type for a message object
    return 'sbus_serial/Sbus';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '1934f89478affea7b06c825c908555cc';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    Header header
    int16[16] rawChannels
    int16[16] mappedChannels
    bool failsafe
    bool frame_lost
    
    ================================================================================
    MSG: std_msgs/Header
    # Standard metadata for higher-level stamped data types.
    # This is generally used to communicate timestamped data 
    # in a particular coordinate frame.
    # 
    # sequence ID: consecutively increasing ID 
    uint32 seq
    #Two-integer timestamp that is expressed as:
    # * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
    # * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
    # time-handling sugar is provided by the client library
    time stamp
    #Frame this data is associated with
    string frame_id
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new Sbus(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.rawChannels !== undefined) {
      resolved.rawChannels = msg.rawChannels;
    }
    else {
      resolved.rawChannels = new Array(16).fill(0)
    }

    if (msg.mappedChannels !== undefined) {
      resolved.mappedChannels = msg.mappedChannels;
    }
    else {
      resolved.mappedChannels = new Array(16).fill(0)
    }

    if (msg.failsafe !== undefined) {
      resolved.failsafe = msg.failsafe;
    }
    else {
      resolved.failsafe = false
    }

    if (msg.frame_lost !== undefined) {
      resolved.frame_lost = msg.frame_lost;
    }
    else {
      resolved.frame_lost = false
    }

    return resolved;
    }
};

module.exports = Sbus;
