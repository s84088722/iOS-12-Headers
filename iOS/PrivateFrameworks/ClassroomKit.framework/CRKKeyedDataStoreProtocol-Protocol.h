//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ClassroomKit/NSObject-Protocol.h>

@class NSData, NSString;

@protocol CRKKeyedDataStoreProtocol <NSObject>
- (_Bool)removeDataForKey:(NSString *)arg1 error:(id *)arg2;
- (NSData *)dataForKey:(NSString *)arg1 error:(id *)arg2;
- (_Bool)setData:(NSData *)arg1 forKey:(NSString *)arg2 error:(id *)arg3;
@end

