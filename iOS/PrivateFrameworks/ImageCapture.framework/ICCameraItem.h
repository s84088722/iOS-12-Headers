//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICCameraDevice, ICCameraFolder, NSData, NSDate, NSDictionary, NSMutableDictionary, NSString;

@interface ICCameraItem : NSObject
{
    void *_itemProperties;
    NSData *_thumbnailData;
    id _userObject;
    NSString *_relativeFileSystemPath;
}

@property(readonly) NSString *relativeFileSystemPath; // @synthesize relativeFileSystemPath=_relativeFileSystemPath;
@property(retain) id userObject; // @synthesize userObject=_userObject;
@property(readonly) NSData *thumbnailData; // @synthesize thumbnailData=_thumbnailData;
- (id)description;
@property(readonly) NSString *fileSystemPath;
- (void)appendToPath:(id)arg1;
@property(readonly) NSMutableDictionary *userData;
- (void)flushMetadataCache;
- (void)flushThumbnailCache;
- (void)requestMetadata;
- (void)requestThumbnail;
@property(readonly) NSDictionary *metadata;
@property(readonly) _Bool hasMetadata;
@property(readonly) struct CGImage *thumbnail;
@property(readonly) _Bool hasThumbnail;
- (void)setPtpObjectHandle:(unsigned int)arg1;
- (unsigned int)ptpObjectHandle;
- (void)setModificationDate:(id)arg1;
@property(readonly) NSDate *modificationDate;
- (void)setCreationDate:(id)arg1;
@property(readonly) NSDate *creationDate;
- (void)setUTI:(id)arg1;
@property(readonly) NSString *UTI;
@property(getter=isLocked) _Bool locked;
@property(readonly) NSString *name;
@property(readonly) ICCameraDevice *device;
- (id)valueForUndefinedKey:(id)arg1;
- (void)dealloc;
@property(copy) CDUnknownBlockType completionBlock;
@property(readonly) unsigned long long objectID;
- (void)setObjectID:(unsigned long long)arg1;
@property(readonly) unsigned long long twinID;
- (void)setTwinID:(unsigned long long)arg1;
@property(readonly) unsigned long long ownerID;
- (void)setOwnerID:(unsigned long long)arg1;
@property(readonly) unsigned long long parentID;
- (void)setParentID:(unsigned long long)arg1;
- (unsigned long long)unsignedIntegerValue;
- (void)setParentFolder:(id)arg1;
@property(readonly) ICCameraFolder *parentFolder;
- (long long)compareObjectID:(id)arg1;
- (id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3;

@end

