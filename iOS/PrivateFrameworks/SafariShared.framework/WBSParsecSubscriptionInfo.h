//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface WBSParsecSubscriptionInfo : NSObject
{
    NSDate *_expirationDate;
    NSString *_type;
}

@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
- (id)_initWithDictionary:(id)arg1;
- (id)initWithString:(id)arg1;

@end

