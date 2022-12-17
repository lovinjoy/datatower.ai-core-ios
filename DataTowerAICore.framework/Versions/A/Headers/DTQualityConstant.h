
typedef enum : NSUInteger {
    DTQualityLevel_TYPE_ERROR     = 1,
    DTQualityLevel_TYPE_WARNING   = 2,
    DTQualityLevel_TYPE_MESSAGE   = 3
} DTQualityLevel;



typedef enum : NSUInteger{
    CODE_INIT_DB_ERROR             = 2007,
    CODE_INSERT_DB_NORMAL_ERROR    = 2003,
    CODE_UPDATE_DB_EXCEPTION       = 2008,
    CODE_QUERY_DB_ERROR            = 2009,
    CODE_QUERY_DB_EXCEPTION        = 2010,
    CODE_ILLEGAL_TIME_ERROR        = 2011,
}DTQualityErrorCode;





typedef enum : NSUInteger {
    MSG_DEFAULT,
    MSG_INIT_DB_ERROR,
    MSG_INSERT_DB_NORMAL_ERROR,
    MSG_INSERT_DB_EXCEPTION,
    MSG_INSERT_OLD_DATA_EXCEPTION,
    MSG_DELETE_DB_EXCEPTION,
    MSG_UPDATE_DB_EXCEPTION,
    MSG_ILLEGAL_TIME_ERROR,
}DTQualityErrorMSG;
