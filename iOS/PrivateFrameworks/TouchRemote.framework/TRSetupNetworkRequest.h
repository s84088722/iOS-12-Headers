//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TouchRemote/TRRequestMessage.h>

@class NSString;

@interface TRSetupNetworkRequest : TRRequestMessage
{
    NSString *_networkSSID;
    NSString *_networkPassword;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *networkPassword; // @synthesize networkPassword=_networkPassword;
@property(copy, nonatomic) NSString *networkSSID; // @synthesize networkSSID=_networkSSID;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

