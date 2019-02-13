//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface _MFLibrarySearchableIndexClientState : NSObject
{
    NSNumber *_transactionValue;
    long long _transaction;
    NSDate *_transactionDate;
    NSString *_systemBuildVersion;
}

+ (id)clientStateFromData:(id)arg1;
+ (id)clientState;
@property(copy, nonatomic) NSString *systemBuildVersion; // @synthesize systemBuildVersion=_systemBuildVersion;
@property(retain, nonatomic) NSDate *transactionDate; // @synthesize transactionDate=_transactionDate;
@property(nonatomic) long long transaction; // @synthesize transaction=_transaction;
@property(readonly, nonatomic) NSNumber *transactionValue;
- (id)archiveRepresentation;
- (void)dealloc;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)description;

@end

