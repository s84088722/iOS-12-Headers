//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideoSubscriberAccount/VSAccountStore.h>

@interface VSTopShelfPurgingAccountStore : VSAccountStore
{
}

- (void)removeAccounts:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)saveAccounts:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_purgeTopShelfContent;

@end
