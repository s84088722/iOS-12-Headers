//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol IKAppDataStoring <NSObject>
- (void)clear;
- (void)removeDataForKey:(NSString *)arg1;
- (unsigned long long)setData:(NSString *)arg1 forKey:(NSString *)arg2;
- (NSString *)getDataForKey:(NSString *)arg1;
- (NSString *)keyAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;

@optional
- (NSDictionary *)dictionaryRepresentation;
@end

