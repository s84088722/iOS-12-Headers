//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMDSpamMessageCreator : NSObject
{
}

- (id)surfURLForIMMessageItem:(id)arg1;
- (_Bool)hasDataDetectedInformalPayment:(id)arg1;
- (id)metaDataForSurfURL:(id)arg1;
- (_Bool)isSurfPayment:(id)arg1;
- (void)reportUnknownToIDS:(id)arg1 messageID:(id)arg2 messageServerTimestamp:(id)arg3 toURI:(id)arg4;
- (id)reportMessageDictionaryForMessages:(id)arg1 withLastAddressedHandle:(id)arg2 maxMessageLength:(unsigned long long)arg3 isAutoReport:(_Bool)arg4 withChat:(id)arg5 maxMessagesToReport:(unsigned long long)arg6 totalMessageCount:(unsigned long long *)arg7;
- (id)transferForGuid:(id)arg1;

@end

