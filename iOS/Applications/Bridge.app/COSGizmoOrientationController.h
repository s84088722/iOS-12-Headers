//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSListController.h>

@class NPSDomainAccessor, NPSManager;

@interface COSGizmoOrientationController : PSListController
{
    NPSDomainAccessor *_domainAccessor;
    NPSManager *_syncManager;
}

+ (id)wristChoice;
@property(retain, nonatomic) NPSManager *syncManager; // @synthesize syncManager=_syncManager;
@property(retain, nonatomic) NPSDomainAccessor *domainAccessor; // @synthesize domainAccessor=_domainAccessor;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)specifiers;
- (void)handleDidUnpair;
- (void)dealloc;
- (id)init;

@end

