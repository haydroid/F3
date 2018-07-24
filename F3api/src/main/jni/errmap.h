#ifndef ERRMAP
#error �ڰ������ļ�֮ǰ�����붨�� ERRMAP �ꡣ
#endif

ERRMAP('0', '0', F3_E_UNDEFINED_COMMAND)
ERRMAP('0', '1', F3_E_INVALID_PARAMETER)
ERRMAP('0', '2', F3_E_NO_CARD_IN) // F3_E_DISABLED_COMMAND
ERRMAP('0', '3', F3_E_UNSUPPORTED_COMMAND)
ERRMAP('0', '4', F3_E_INVALID_PARAMETER)
ERRMAP('0', '5', F3_E_CONTACT_NO_RELEASE)

ERRMAP('1', '0', F3_E_CARD_JAMMED)
ERRMAP('1', '2', F3_E_SENSOR_ABNORMALITY)
ERRMAP('1', '3', F3_E_TOO_LONG_CARD)
ERRMAP('1', '4', F3_E_TOO_SHORT_CARD)

ERRMAP('4', '0', F3_E_CARD_WITHDRAWN)
ERRMAP('4', '1', F3_E_IC_SOLENOID_ERROR)
ERRMAP('4', '3', F3_E_CANT_MOVED_TO_IC_POS)
ERRMAP('4', '5', F3_E_CARD_POSITION_CHANGE)

ERRMAP('5', '0', F3_E_COUNTER_OVERFLOW)
ERRMAP('5', '1', F3_E_MOTOR_ABNORMALITY)

ERRMAP('6', '0', F3_E_POWER_SHORT)
ERRMAP('6', '1', F3_E_ICC_ACTIVATION_ERROR)
ERRMAP('6', '2', F3_E_UNSUPPORTED_COMMAND)
ERRMAP('6', '5', F3_E_ICC_NOT_ACTIVATED)
ERRMAP('6', '6', F3_E_UNSUPPORTED_ICC)
ERRMAP('6', '7', F3_E_ICC_RECEPTION_ERROR)
ERRMAP('6', '8', F3_E_ICC_COMM_TIMEOUT)
ERRMAP('6', '9', F3_E_MISMATCH_EMV)

ERRMAP('A', '0', F3_E_CARD_BOX_EMPTY)
ERRMAP('A', '1', F3_E_CAPTURE_BOX_FULL)
ERRMAP('B', '0', F3_E_WAITING_FOR_RESET)


#undef ERRMAP