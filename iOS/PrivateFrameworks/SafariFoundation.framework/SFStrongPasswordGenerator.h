//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WBSPasswordGenerationManager;

@interface SFStrongPasswordGenerator : NSObject
{
    WBSPasswordGenerationManager *_passwordGenerationManager;
}

- (void).cxx_destruct;
- (id)generatedPasswordForAppWithAppID:(id)arg1 associatedDomains:(id)arg2 passwordRules:(id)arg3 confirmPasswordRules:(id)arg4;
- (id)init;

@end

