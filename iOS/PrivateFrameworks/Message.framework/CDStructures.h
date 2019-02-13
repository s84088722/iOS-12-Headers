//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CentralDirectory {
    unsigned char _field1[4];
    unsigned short _field2;
    unsigned short _field3;
    unsigned short _field4;
    unsigned short _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned short _field8;
};

struct CentralHeader {
    unsigned char _field1[4];
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned char _field5;
    unsigned short _field6;
    unsigned short _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned short _field12;
    unsigned short _field13;
    unsigned short _field14;
    unsigned short _field15;
    unsigned short _field16;
    unsigned int _field17;
    unsigned int _field18;
    char *_field19;
};

struct _CommandStackEntry {
    struct *_field1;
    id _field2;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _opaque_pthread_t {
    long long _field1;
    struct __darwin_pthread_handler_rec *_field2;
    char _field3[8176];
};

struct internal_state;

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct z_stream_s {
    char *_field1;
    unsigned int _field2;
    unsigned long long _field3;
    char *_field4;
    unsigned int _field5;
    unsigned long long _field6;
    char *_field7;
    struct internal_state *_field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    void *_field11;
    int _field12;
    unsigned long long _field13;
    unsigned long long _field14;
};

#pragma mark Typedef'd Structures

typedef struct {
    id _field1;
    id _field2;
    unsigned int _field3;
    unsigned int _field4;
    _Bool _field5;
    _Bool _field6;
    _Bool _field7;
} CDStruct_f28f5ac0;

typedef struct {
    id _field1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :2;
} CDStruct_3441fd00;

