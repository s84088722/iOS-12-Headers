//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLFeedbackMessage.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CPLResetFeedbackMessage : CPLFeedbackMessage
{
    NSString *_resetType;
    NSString *_reason;
    NSString *_uuid;
}

+ (id)feedbackType;
@property(readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) NSString *resetType; // @synthesize resetType=_resetType;
- (void).cxx_destruct;
- (id)serverMessage;
- (id)initWithResetType:(id)arg1 reason:(id)arg2 uuid:(id)arg3;

@end

