//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKit/EKSerializableObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface EKSerializableAttachment : EKSerializableObject
{
    NSURL *_urlOnDisk;
}

+ (id)classesForKey;
@property(retain, nonatomic) NSURL *urlOnDisk; // @synthesize urlOnDisk=_urlOnDisk;
- (void).cxx_destruct;
- (id)createAttachment;
- (id)initWithAttachment:(id)arg1;

@end

