//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, UIImage;

@interface SFAirDropNode : NSObject
{
    struct __SFOperation *_sender;
    _Bool _me;
    _Bool _unknown;
    _Bool _monogram;
    _Bool _classroom;
    _Bool _classroomGroup;
    _Bool _classroomCourse;
    _Bool _supportsCredentials;
    _Bool _supportsFMF;
    _Bool _supportsPasses;
    _Bool _supportsMixedTypes;
    NSDate *_discoveryDate;
    id _node;
    NSString *_contactIdentifier;
    NSString *_realName;
    UIImage *_displayIcon;
    NSString *_displayName;
    NSString *_secondaryName;
}

+ (id)nodeWithSFNode:(struct __SFNode *)arg1;
@property(readonly) _Bool supportsMixedTypes; // @synthesize supportsMixedTypes=_supportsMixedTypes;
@property(readonly) _Bool supportsPasses; // @synthesize supportsPasses=_supportsPasses;
@property(readonly) _Bool supportsFMF; // @synthesize supportsFMF=_supportsFMF;
@property(readonly) _Bool supportsCredentials; // @synthesize supportsCredentials=_supportsCredentials;
@property(getter=isClassroomCourse) _Bool classroomCourse; // @synthesize classroomCourse=_classroomCourse;
@property(getter=isclassroomGroup) _Bool classroomGroup; // @synthesize classroomGroup=_classroomGroup;
@property(getter=isClassroom) _Bool classroom; // @synthesize classroom=_classroom;
@property(getter=isMonogram) _Bool monogram; // @synthesize monogram=_monogram;
@property(getter=isUnknown) _Bool unknown; // @synthesize unknown=_unknown;
@property(getter=isMe) _Bool me; // @synthesize me=_me;
@property(retain) NSString *secondaryName; // @synthesize secondaryName=_secondaryName;
@property(retain) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain) UIImage *displayIcon; // @synthesize displayIcon=_displayIcon;
@property(retain) NSString *realName; // @synthesize realName=_realName;
@property(retain) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(retain) id node; // @synthesize node=_node;
@property(readonly) NSDate *discoveryDate; // @synthesize discoveryDate=_discoveryDate;
- (void).cxx_destruct;
- (void)simulateFakeTransferWithSessionID:(id)arg1;
- (void)handleOperationCallback:(struct __SFOperation *)arg1 event:(long long)arg2 withResults:(id)arg3;
- (void)cancelSend;
- (void)startSendForBundleID:(id)arg1 sessionID:(id)arg2 items:(id)arg3 description:(id)arg4 previewImage:(id)arg5;
- (void)updateWithSFNode:(struct __SFNode *)arg1;
@property(readonly, getter=isKnown) _Bool known;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)init;

@end

