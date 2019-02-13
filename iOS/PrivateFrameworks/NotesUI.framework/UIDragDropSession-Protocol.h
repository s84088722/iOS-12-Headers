//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NotesUI/NSObject-Protocol.h>

@class NSArray, UIView;

@protocol UIDragDropSession <NSObject>
@property(readonly, nonatomic, getter=isRestrictedToDraggingApplication) _Bool restrictedToDraggingApplication;
@property(readonly, nonatomic) _Bool allowsMoveOperation;
@property(readonly, nonatomic) NSArray *items;
- (_Bool)canLoadObjectsOfClass:(Class)arg1;
- (_Bool)hasItemsConformingToTypeIdentifiers:(NSArray *)arg1;
- (struct CGPoint)locationInView:(UIView *)arg1;
@end

