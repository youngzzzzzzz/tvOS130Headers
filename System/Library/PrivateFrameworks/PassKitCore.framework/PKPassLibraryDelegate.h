/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPassLibraryDelegate <NSObject>
@optional
-(void)contactlessInterfaceDidPresentFromSource:(long long)arg1;
-(void)contactlessInterfaceDidDismissFromSource:(long long)arg1;
-(void)passLibraryReceivedInterruption;
-(void)passLibrary:(id)arg1 receivedUpdatedCatalog:(id)arg2 passes:(id)arg3;

@end
