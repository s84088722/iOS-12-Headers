//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudServices/SRPClientRequest-Protocol.h>

@class NSDictionary, NSString, SecureBackup;

@interface SRPInit : NSObject <SRPClientRequest>
{
    NSString *_recordLabel;
    NSDictionary *_escrowRecord;
    NSString *_recordID;
    SecureBackup *_sb;
}

@property(readonly, retain, nonatomic) SecureBackup *sb; // @synthesize sb=_sb;
@property(copy, nonatomic) NSString *recordID; // @synthesize recordID=_recordID;
@property(retain, nonatomic) NSDictionary *escrowRecord; // @synthesize escrowRecord=_escrowRecord;
@property(copy, nonatomic) NSString *recordLabel; // @synthesize recordLabel=_recordLabel;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *recoveryPassphrase;
@property(readonly, copy, nonatomic) NSString *dsid;
- (id)validateInput;
- (id)initWithSecureBackup:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

