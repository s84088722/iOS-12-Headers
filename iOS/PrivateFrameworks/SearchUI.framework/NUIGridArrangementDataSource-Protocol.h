//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchUI/NSObject-Protocol.h>

@class NUIGridArrangement;
@protocol NUIArrangementItem;

@protocol NUIGridArrangementDataSource <NSObject>
- (id <NUIArrangementItem>)gridArrangement:(NUIGridArrangement *)arg1 itemAtIndex:(long long)arg2 columns:(struct _NSRange *)arg3 rows:(struct _NSRange *)arg4 horizontalAlignment:(long long *)arg5 verticalAlignment:(long long *)arg6;
- (long long)numberOfItemsInGridArrangement:(NUIGridArrangement *)arg1;

@optional
- (double)gridArrangement:(NUIGridArrangement *)arg1 heightOfRowAtIndex:(long long)arg2 spacingAfter:(double *)arg3;
- (double)gridArrangement:(NUIGridArrangement *)arg1 widthOfColumnAtIndex:(long long)arg2 spacingAfter:(double *)arg3;
@end

