//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface COSAppleIDUtilities : NSObject
{
}

+ (_Bool)checkIfSameAppleIDForUsername1:(id)arg1 username2:(id)arg2 DSID1:(id)arg3 DSID2:(id)arg4 altDSID1:(id)arg5 altDSID2:(id)arg6;
+ (_Bool)checkIfAccount:(id)arg1 isForSameAppleIDAsAccount:(id)arg2;
+ (id)altDSIDForAccount:(id)arg1;
+ (id)DSIDForAccount:(id)arg1;
+ (id)usernameForAccount:(id)arg1;

@end

