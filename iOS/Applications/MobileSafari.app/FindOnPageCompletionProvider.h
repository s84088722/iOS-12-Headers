//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CompletionProvider.h"

@protocol FindOnPageCompletionProviderDataSource;

@interface FindOnPageCompletionProvider : CompletionProvider
{
    id <FindOnPageCompletionProviderDataSource> _dataSource;
}

@property(nonatomic) __weak id <FindOnPageCompletionProviderDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)setQueryToComplete:(id)arg1;
- (id)completionsForQuery:(id)arg1;

@end

