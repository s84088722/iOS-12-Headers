//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol PLFileManager <NSObject>
- (_Bool)fileExistsAtPath:(NSString *)arg1 isDirectory:(_Bool *)arg2;
- (_Bool)fileExistsAtPath:(NSString *)arg1;
- (NSDictionary *)attributesOfItemAtPath:(NSString *)arg1 error:(id *)arg2;
@end

