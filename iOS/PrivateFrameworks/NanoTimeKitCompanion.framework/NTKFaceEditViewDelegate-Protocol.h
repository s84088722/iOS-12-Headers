//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NSObject-Protocol.h>

@class NSString, NTKFaceEditView;

@protocol NTKFaceEditViewDelegate <NSObject>
- (void)editView:(NTKFaceEditView *)arg1 didTapKeylineForKey:(NSString *)arg2 editMode:(long long)arg3;
- (void)editView:(NTKFaceEditView *)arg1 keylineDidRubberBand:(double)arg2 forKey:(NSString *)arg3 editMode:(long long)arg4;
- (void)editView:(NTKFaceEditView *)arg1 keylineDidBreathe:(double)arg2 forKey:(NSString *)arg3 editMode:(long long)arg4;
- (void)editView:(NTKFaceEditView *)arg1 didScrollToFraction:(double)arg2 fromEditMode:(long long)arg3 toEditMode:(long long)arg4;
- (void)editView:(NTKFaceEditView *)arg1 didStopAtEditMode:(long long)arg2;
- (void)editViewWillBeginScrolling:(NTKFaceEditView *)arg1;
@end

