//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CompanionSync/SYStoreSessionOwner.h>

__attribute__((visibility("hidden")))
@interface SYStoreIncomingSessionOwner : SYStoreSessionOwner
{
}

- (void)syncSession:(id)arg1 applyChanges:(struct NSArray *)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)syncSession:(id)arg1 resetDataStoreWithError:(id *)arg2;
- (_Bool)isResetSync;
- (id)initWithIncomingSession:(id)arg1;

@end

