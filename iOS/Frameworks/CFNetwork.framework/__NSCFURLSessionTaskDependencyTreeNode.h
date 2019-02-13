//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSNumber, NSURLSessionTaskDependencyDescription;

__attribute__((visibility("hidden")))
@interface __NSCFURLSessionTaskDependencyTreeNode : NSObject
{
    NSURLSessionTaskDependencyDescription *dependencyDescription;
    NSMutableArray *children;
    NSMutableArray *childrenResourceIdentifiers;
    NSNumber *rootParentStreamID;
    NSMutableDictionary *_dependentToParentStreamIDs;
    NSMutableDictionary *_parentToParentStreamIDs;
}

@property(retain, nonatomic) NSMutableDictionary *_parentToParentStreamIDs; // @synthesize _parentToParentStreamIDs;
@property(retain, nonatomic) NSMutableDictionary *_dependentToParentStreamIDs; // @synthesize _dependentToParentStreamIDs;
@property(retain, nonatomic) NSNumber *rootParentStreamID; // @synthesize rootParentStreamID;
@property(retain, nonatomic) NSMutableArray *childrenResourceIdentifiers; // @synthesize childrenResourceIdentifiers;
@property(retain, nonatomic) NSMutableArray *children; // @synthesize children;
@property(retain, nonatomic) NSURLSessionTaskDependencyDescription *dependencyDescription; // @synthesize dependencyDescription;
- (id)makePriorityInfoStartingFromStreamID:(int *)arg1;
- (void)makePriorityInfoStartingFromStreamID:(int *)arg1 parentStream:(int)arg2 priorityInfo:(id)arg3 dependentToParentStreamIDs:(id)arg4 parentToParentStreamIDs:(id)arg5;
- (void)buildTree:(id)arg1 parentsToDependencies:(id)arg2 parentsToChildren:(id)arg3;
- (void)dealloc;
- (id)init;

@end

