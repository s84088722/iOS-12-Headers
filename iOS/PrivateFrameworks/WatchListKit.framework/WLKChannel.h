//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, WLKChannelDetails;

@interface WLKChannel : NSObject
{
    NSString *_ID;
    WLKChannelDetails *_details;
    NSDictionary *_punchoutUrls;
    NSArray *_seasonNumbers;
}

+ (id)channelsWithDictionaries:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *seasonNumbers; // @synthesize seasonNumbers=_seasonNumbers;
@property(readonly, copy, nonatomic) NSDictionary *punchoutUrls; // @synthesize punchoutUrls=_punchoutUrls;
@property(readonly, copy, nonatomic) WLKChannelDetails *details; // @synthesize details=_details;
@property(readonly, copy, nonatomic) NSString *ID; // @synthesize ID=_ID;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)arg1;

@end

