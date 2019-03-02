/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:30:52 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IKJSDOMLSParser <JSExport>
@property (getter=appendAsChildrenAction,readonly) long long ACTION_APPEND_AS_CHILDREN; 
@property (getter=replaceChildrenAction,readonly) long long ACTION_REPLACE_CHILDREN; 
@property (getter=insertBeforeAction,readonly) long long ACTION_INSERT_BEFORE; 
@property (getter=insertAfterAction,readonly) long long ACTION_INSERT_AFTER; 
@property (getter=replaceAction,readonly) long long ACTION_REPLACE; 
@required
-(id)parse:(id)arg1;
-(id)parseWithContext:(id)arg1 :(id)arg2 :(long long)arg3;
-(long long)appendAsChildrenAction;
-(long long)replaceChildrenAction;
-(long long)insertBeforeAction;
-(long long)insertAfterAction;
-(long long)replaceAction;

@end
