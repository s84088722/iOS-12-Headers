//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VisualVoicemail/NSCopying-Protocol.h>
#import <VisualVoicemail/NSSecureCoding-Protocol.h>

@interface VMVoicemailCapabilities : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _transcriptionEnabled;
}

+ (id)unarchivedObjectFromData:(id)arg1 error:(id *)arg2;
+ (id)unarchivedObjectClasses;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic, getter=isTranscriptionEnabled) _Bool transcriptionEnabled; // @synthesize transcriptionEnabled=_transcriptionEnabled;
- (id)archivedDataWithError:(id *)arg1;
- (_Bool)isEqualToCapabilities:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCapabilities:(id)arg1;
- (id)initWithTranscriptionEnabled:(_Bool)arg1;
- (id)init;

@end

