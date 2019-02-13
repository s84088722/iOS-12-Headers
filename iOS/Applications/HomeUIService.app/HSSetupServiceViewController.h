//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HSSetupIdentifiableAccessoryViewController.h"

#import "HSServiceSetupStep-Protocol.h"
#import "HUChildServiceModuleControllerDelegate-Protocol.h"
#import "HUEditRoomViewControllerPresentationDelegate-Protocol.h"
#import "HUIconPickerViewControllerDelegate-Protocol.h"
#import "HUNameAndIconEditorCellDelegate-Protocol.h"
#import "HUSwitchCellDelegate-Protocol.h"

@class HFItemBuilder, HFRoomBuilder, HSSetupServiceItemManager, HUChildServiceItemModuleController, NAFuture, NSMutableSet, NSString;
@protocol HFHomeKitObject, HFServiceLikeBuilder, HSSetupStepDelegate;

@interface HSSetupServiceViewController : HSSetupIdentifiableAccessoryViewController <HUEditRoomViewControllerPresentationDelegate, HUSwitchCellDelegate, HUNameAndIconEditorCellDelegate, HUIconPickerViewControllerDelegate, HUChildServiceModuleControllerDelegate, HSServiceSetupStep>
{
    id <HSSetupStepDelegate> _delegate;
    HFItemBuilder<HFServiceLikeBuilder> *_serviceLikeBuilder;
    NSMutableSet *_moduleControllers;
    HUChildServiceItemModuleController *_valveModuleController;
    NSString *_editedName;
}

@property(retain, nonatomic) NSString *editedName; // @synthesize editedName=_editedName;
@property(retain, nonatomic) HUChildServiceItemModuleController *valveModuleController; // @synthesize valveModuleController=_valveModuleController;
@property(retain, nonatomic) NSMutableSet *moduleControllers; // @synthesize moduleControllers=_moduleControllers;
@property(readonly, nonatomic) HFItemBuilder<HFServiceLikeBuilder> *serviceLikeBuilder; // @synthesize serviceLikeBuilder=_serviceLikeBuilder;
@property(nonatomic) __weak id <HSSetupStepDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)childServiceEditorModuleController:(id)arg1 didSelectItem:(id)arg2;
- (void)iconPicker:(id)arg1 didPickIconDescriptor:(id)arg2;
- (void)iconPickerDidCancel:(id)arg1;
- (void)nameAndIconEditorCellDidTapIcon:(id)arg1;
@property(readonly, nonatomic) long long setupState;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject; // @dynamic homeKitObject;
- (void)switchCell:(id)arg1 didTurnOn:(_Bool)arg2;
- (void)editRoomViewControllerDidFinish:(id)arg1 withNewRoom:(id)arg2;
- (void)_updateCheckedStateForAssociatedServiceTypeCell:(id)arg1 item:(id)arg2;
- (id)commitChanges;
- (void)_updateAndSanitizeNameFromTextField;
@property(readonly, nonatomic) NSString *savedName;
@property(readonly, nonatomic) _Bool supportsCustomIconEditing;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (void)textDidChange:(id)arg1 forTextField:(id)arg2 item:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1 item:(id)arg2;
- (void)textFieldDidBeginEditing:(id)arg1 item:(id)arg2;
- (id)currentTextForTextField:(id)arg1 item:(id)arg2;
- (id)defaultTextForTextField:(id)arg1 item:(id)arg2;
- (_Bool)shouldManageTextFieldForItem:(id)arg1;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)itemModuleControllers;
@property(retain, nonatomic) HFRoomBuilder *prepopulatedRoomBuilder;
- (void)viewDidLoad;
- (id)initWithBuilderItem:(id)arg1 serviceLikeBuilder:(id)arg2 configurationProgress:(CDStruct_3999e4e2)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) HSSetupServiceItemManager *itemManager; // @dynamic itemManager;
@property(readonly, nonatomic) NAFuture *readyToDisplayFuture;
@property(readonly) Class superclass;

@end

