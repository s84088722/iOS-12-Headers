//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface LUIAggregateLogger : NSObject
{
}

+ (void)userDeletedBecausePasscodeChanged;
+ (void)userDeletedBecauseAuditor;
+ (void)userDeleted;
+ (void)userDeletedForReason:(unsigned long long)arg1;
+ (void)loginErrorCausedLogout;
+ (void)loginInitiatedByClassroom;
+ (void)loggingInExistingUser;
+ (void)loggingInNewUser;
+ (void)loggingInUser;
+ (void)offlineAuthAccountLockedOut;
+ (void)offlineAuthNotAllowed;
+ (void)offlineAuthAllowed;
+ (void)offlineAuthAttempted;
+ (void)addDurationUserLoggedIn:(double)arg1;
+ (void)addDurationInLoginUI:(double)arg1;
+ (void)addUserDataUsed:(double)arg1;
+ (void)setUserDataQuota:(long long)arg1;
+ (void)setPercentageUsersUsed:(double)arg1;
+ (void)setMaxUserCount:(long long)arg1;
+ (void)setUserCount:(long long)arg1;
+ (void)setStudentCount:(long long)arg1;
+ (void)setClassCount:(long long)arg1;
+ (void)setDataFromClassConfiguration:(id)arg1;
+ (void)accountsHavePhotos;
+ (void)runningMultiUser;
+ (void)appWillTerminate;
+ (void)appDidLaunch;

@end
