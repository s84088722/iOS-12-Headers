/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:55:12 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _TVRXKeyboardControllerDelegate, _TVRXKeyboardImpl;
@class TVRCKeyboardAttributes, NSString;

@interface _TVRXKeyboardController : NSObject {

	id<_TVRXKeyboardControllerDelegate> _delegate;
	id<_TVRXKeyboardImpl> _impl;

}

@property (setter=_setImpl:,getter=_impl,nonatomic,retain) id<_TVRXKeyboardImpl> impl;              //@synthesize impl=_impl - In the implementation block
@property (assign,nonatomic,__weak) id<_TVRXKeyboardControllerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (getter=isEditing,nonatomic,readonly) BOOL editing; 
@property (nonatomic,readonly) TVRCKeyboardAttributes * attributes; 
@property (nonatomic,copy) NSString * text; 
-(void)_editingSessionBeganWithAttributes:(id)arg1 ;
-(void)_editingSessionEnded;
-(void)_editingSessionUpdatedAttributes:(id)arg1 ;
-(void)_editingSessionUpdatedText:(id)arg1 ;
-(void)_beginSessionWithAttributes:(id)arg1 ;
-(void)sendTextActionPayload:(id)arg1 ;
-(void)_textActionPayloadGenerated:(id)arg1 ;
-(void)sendReturnKey;
-(void)setDelegate:(id<_TVRXKeyboardControllerDelegate>)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
-(id<_TVRXKeyboardControllerDelegate>)delegate;
-(id)_impl;
-(BOOL)isEditing;
-(TVRCKeyboardAttributes *)attributes;
-(void)_setImpl:(id)arg1 ;
-(id)_init;
-(void)_endSession;
@end

