//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/NSSecureCoding-Protocol.h>

@class NSDate, NSString, NSURL;

@interface WBSRemoteHistoryItem : NSObject <NSSecureCoding>
{
    NSURL *_url;
    NSString *_title;
    NSDate *_lastVisitTime;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSDate *lastVisitTime; // @synthesize lastVisitTime=_lastVisitTime;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithURL:(id)arg1 title:(id)arg2 lastVisitTime:(id)arg3;
- (id)init;

@end

