/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:41 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PXSwipeSelectionManagerDelegate <NSObject>
@optional
-(PXSimpleIndexPath*)swipeSelectionManager:(id)arg1 itemIndexPathClosestLeadingLocation:(CGPoint)arg2;
-(PXSimpleIndexPath*)swipeSelectionManager:(id)arg1 itemIndexPathClosestAboveLocation:(CGPoint)arg2;
-(BOOL)swipeSelectionManager:(id)arg1 shouldSelectItemAtIndexPath:(PXSimpleIndexPath)arg2;
-(BOOL)swipeSelectionManager:(id)arg1 shouldBeginSelectionAtLocation:(CGPoint)arg2;
-(BOOL)swipeSelectionManager:(id)arg1 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(CGPoint)arg2;
-(void)swipeSelectionManagerAutomaticallyTransitionToMultiSelectMode:(id)arg1;
-(id)swipeSelectionManager:(id)arg1 indexPathSetFromIndexPath:(PXSimpleIndexPath)arg2 toIndexPath:(PXSimpleIndexPath)arg3;

@required
-(BOOL)swipeSelectionManagerIsInMultiSelectMode:(id)arg1;
-(PXSimpleIndexPath*)swipeSelectionManager:(id)arg1 itemIndexPathAtLocation:(CGPoint)arg2;

@end

