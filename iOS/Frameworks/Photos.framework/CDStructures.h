//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGAffineTransform {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CLLocationCoordinate2D {
    double latitude;
    double longitude;
};

struct NSDictionary {
    Class _field1;
};

struct PHAssetResourceTableDataSpecification {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    int _field5;
    int _field6;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct options_bits {
    unsigned int preserveFolderStructure:1;
    unsigned int hideProgress:1;
    unsigned int skipAlertWhenFinished:1;
    unsigned int referencedImport:1;
    unsigned int allowDuplicates:1;
    unsigned int skipDiskSpaceCheck:1;
    unsigned int deleteAfterImport:1;
    unsigned int metadataAddMode:1;
    unsigned int omitImportComplete:1;
    unsigned int allowUnsupported:1;
    unsigned int fileOperation:3;
    unsigned int importedBy:8;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct {
    CDStruct_1b6d18a9 start;
    CDStruct_1b6d18a9 duration;
} CDStruct_e83c9415;

