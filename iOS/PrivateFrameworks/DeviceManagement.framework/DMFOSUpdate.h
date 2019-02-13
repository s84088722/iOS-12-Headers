//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DeviceManagement/NSCopying-Protocol.h>
#import <DeviceManagement/NSSecureCoding-Protocol.h>

@class NSString;

@interface DMFOSUpdate : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isCritical;
    _Bool _restartRequired;
    _Bool _allowsInstallLater;
    NSString *_productKey;
    NSString *_humanReadableName;
    NSString *_productName;
    NSString *_version;
    NSString *_build;
    unsigned long long _downloadSize;
    unsigned long long _installSize;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) _Bool allowsInstallLater; // @synthesize allowsInstallLater=_allowsInstallLater;
@property(readonly, nonatomic) _Bool restartRequired; // @synthesize restartRequired=_restartRequired;
@property(readonly, nonatomic) _Bool isCritical; // @synthesize isCritical=_isCritical;
@property(readonly, nonatomic) unsigned long long installSize; // @synthesize installSize=_installSize;
@property(readonly, nonatomic) unsigned long long downloadSize; // @synthesize downloadSize=_downloadSize;
@property(readonly, copy, nonatomic) NSString *build; // @synthesize build=_build;
@property(readonly, copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, copy, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(readonly, copy, nonatomic) NSString *humanReadableName; // @synthesize humanReadableName=_humanReadableName;
@property(readonly, copy, nonatomic) NSString *productKey; // @synthesize productKey=_productKey;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithProductKey:(id)arg1 humanReadableName:(id)arg2 productName:(id)arg3 version:(id)arg4 build:(id)arg5 downloadSize:(unsigned long long)arg6 installSize:(unsigned long long)arg7 isCritical:(_Bool)arg8 restartRequired:(_Bool)arg9 allowsInstallLater:(_Bool)arg10;

@end

