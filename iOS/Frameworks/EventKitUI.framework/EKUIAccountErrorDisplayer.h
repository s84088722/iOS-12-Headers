//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface EKUIAccountErrorDisplayer : NSObject
{
}

+ (_Bool)errorIsActionable:(unsigned long long)arg1;
+ (void)presentAlertForOfflineErrorUsingViewController:(id)arg1;
+ (_Bool)_reauthorizeForAccount:(id)arg1 usingViewController:(id)arg2;
+ (void)presentAlertForAccount:(id)arg1 error:(unsigned long long)arg2 usingViewController:(id)arg3;
+ (unsigned long long)moreSevereErrorOfError:(unsigned long long)arg1 andError:(unsigned long long)arg2;
+ (unsigned long long)severityForError:(unsigned long long)arg1;

@end

