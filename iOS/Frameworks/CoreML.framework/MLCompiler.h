//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MLCompiler : NSObject
{
}

+ (id)compiledVersionForSpecification:(struct _MLModelSpecification *)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)compiledVersionForSpecificationAtURL:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)compileSpecification:(struct _MLModelSpecification *)arg1 toArchive:(struct _MLModelOutputArchiver *)arg2 options:(id)arg3 error:(id *)arg4;
+ (id)versionInfo;
+ (id)compileSpecificationAtURL:(id)arg1 toURL:(id)arg2 options:(id)arg3 error:(id *)arg4;

@end

