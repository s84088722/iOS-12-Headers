//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSError, NSString;

@interface CKZonePCSDiagnosticInformation : NSObject <NSSecureCoding>
{
    _Bool _wasRepaired;
    int _pcsStatus;
    NSString *_pcsDiagnosticString;
    NSError *_pcsError;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSError *pcsError; // @synthesize pcsError=_pcsError;
@property(retain, nonatomic) NSString *pcsDiagnosticString; // @synthesize pcsDiagnosticString=_pcsDiagnosticString;
@property(nonatomic) int pcsStatus; // @synthesize pcsStatus=_pcsStatus;
@property(nonatomic) _Bool wasRepaired; // @synthesize wasRepaired=_wasRepaired;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

