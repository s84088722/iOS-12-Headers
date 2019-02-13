//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DocumentCamera/NSSecureCoding-Protocol.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface DCSandboxExtension : NSObject <NSSecureCoding>
{
    _Bool _canAccessFileURL;
    _Bool _shouldIssueSandboxExtensionWhenEncoding;
    NSURL *_fileURL;
    long long _sandboxExtensionHandle;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long sandboxExtensionHandle; // @synthesize sandboxExtensionHandle=_sandboxExtensionHandle;
@property(readonly, nonatomic) _Bool shouldIssueSandboxExtensionWhenEncoding; // @synthesize shouldIssueSandboxExtensionWhenEncoding=_shouldIssueSandboxExtensionWhenEncoding;
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly, nonatomic) _Bool canAccessFileURL; // @synthesize canAccessFileURL=_canAccessFileURL;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)relinquish;
- (id)initWithFileURL:(id)arg1;

@end

