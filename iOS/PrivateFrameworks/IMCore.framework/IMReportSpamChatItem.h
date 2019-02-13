//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMCore/IMTranscriptChatItem.h>

@interface IMReportSpamChatItem : IMTranscriptChatItem
{
    _Bool _wasReportedAsSpam;
    _Bool _isGroupMessage;
    _Bool _hasMultipleMessages;
    _Bool _showReportSMSSpam;
}

@property(readonly, nonatomic) _Bool showReportSMSSpam; // @synthesize showReportSMSSpam=_showReportSMSSpam;
@property(readonly, nonatomic) _Bool hasMultipleMessages; // @synthesize hasMultipleMessages=_hasMultipleMessages;
@property(readonly, nonatomic) _Bool isGroupMessage; // @synthesize isGroupMessage=_isGroupMessage;
@property(readonly, nonatomic) _Bool wasReportedAsSpam; // @synthesize wasReportedAsSpam=_wasReportedAsSpam;
- (id)_initWithItem:(id)arg1 wasReportedAsSpam:(_Bool)arg2 isGroup:(_Bool)arg3 hasMultipleMessages:(_Bool)arg4 showReportSMSSpam:(_Bool)arg5;

@end

