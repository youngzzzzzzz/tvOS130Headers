/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/MPAVRoutingControllerDelegate.h>

@class MPAVRoutingController, NSArray, NSSet, NSString;

@interface AVSpeakerManager : NSObject <MPAVRoutingControllerDelegate> {

	BOOL _fetchingRoutes;
	MPAVRoutingController* _routingController;
	NSArray* _routes;
	NSSet* _selectedRoutes;

}

@property (nonatomic,copy,readonly) NSArray * routes;                            //@synthesize routes=_routes - In the implementation block
@property (nonatomic,readonly) NSSet * selectedRoutes;                           //@synthesize selectedRoutes=_selectedRoutes - In the implementation block
@property (nonatomic,readonly) BOOL supportsMultipleRouteSelection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSArray *)routes;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(void)routingController:(id)arg1 didFailToPickRouteWithError:(id)arg2 ;
-(void)routingController:(id)arg1 pickedRoutesDidChange:(id)arg2 ;
-(void)routingController:(id)arg1 pickedRouteDidChange:(id)arg2 ;
-(BOOL)supportsMultipleRouteSelection;
-(void)selectRoute:(id)arg1 withPassword:(id)arg2 ;
-(long long)compareRoute:(id)arg1 toRoute:(id)arg2 ;
-(void)_updateSelectedRoutes;
-(NSSet *)selectedRoutes;
@end

