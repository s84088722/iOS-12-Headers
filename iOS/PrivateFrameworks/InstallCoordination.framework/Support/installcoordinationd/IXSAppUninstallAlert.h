//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IXSUninstallAlert.h"

@class NSBundle, NSString;

@interface IXSAppUninstallAlert : IXSUninstallAlert
{
    NSBundle *_defaultStringsBundle;
    NSString *_defaultStringsFileName;
}

@property(readonly, nonatomic) NSString *defaultStringsFileName; // @synthesize defaultStringsFileName=_defaultStringsFileName;
@property(readonly, nonatomic) NSBundle *defaultStringsBundle; // @synthesize defaultStringsBundle=_defaultStringsBundle;
- (void).cxx_destruct;
- (id)cancelButtonLabel;
- (id)deleteButtonLabel;
- (id)message;
- (id)title;
- (id)_localizedStringForKey:(id)arg1;
@property(readonly, nonatomic) _Bool appHasiCloudDataOrDocuments; // @dynamic appHasiCloudDataOrDocuments;
- (id)initWithAppProxy:(id)arg1 isRemovable:(_Bool)arg2;

@end

