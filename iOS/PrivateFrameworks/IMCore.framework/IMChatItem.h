//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMCore/NSCopying-Protocol.h>

@class IMItem, NSString;

@interface IMChatItem : NSObject <NSCopying>
{
    IMItem *_item;
}

- (void).cxx_destruct;
@property(readonly, retain, nonatomic) NSString *balloonBundleID;
- (void)_setTimeAdded:(id)arg1;
- (id)_timeAdded;
- (id)_timeStale;
- (id)_item;
- (id)_initWithItem:(id)arg1;
@property(readonly, nonatomic) _Bool canDelete;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

