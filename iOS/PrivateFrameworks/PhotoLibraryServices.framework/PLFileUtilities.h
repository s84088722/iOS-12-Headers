//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLFileUtilities : NSObject
{
}

+ (_Bool)filePath:(id)arg1 hasPrefix:(id)arg2;
+ (id)realPathForPath:(id)arg1 error:(id *)arg2;
+ (id)_mobileOwnerAttributes;
+ (_Bool)changeFileOwnerToMobileAtPath:(id)arg1 error:(id *)arg2;
+ (_Bool)changeFileOwnerToMobileAtPath:(id)arg1 error:(id *)arg2 usingFileManager:(id)arg3;
+ (_Bool)createDirectoryAtPath:(id)arg1 error:(id *)arg2;
+ (_Bool)createDirectoryAtPath:(id)arg1 error:(id *)arg2 usingFileManager:(id)arg3;
+ (_Bool)_isFileExistsError:(id)arg1;
+ (_Bool)hasDiskSpaceToCopyFileAtURL:(id)arg1;
+ (_Bool)stripExtendedAttributesFromFileAtURL:(id)arg1 inDomain:(id)arg2 error:(id *)arg3;
+ (_Bool)ingestItemAtURL:(id)arg1 toURL:(id)arg2 type:(long long)arg3 options:(unsigned long long)arg4 error:(id *)arg5;
+ (id)descriptionForFileIngestionType:(long long)arg1;
+ (_Bool)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
+ (_Bool)cloneFileAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
+ (_Bool)secureMoveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
+ (id)fileManager;
+ (_Bool)supportsClone;

@end

