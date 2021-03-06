/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSSet;

@interface PXDiagnosticsItemProvider : NSObject {

	NSMutableDictionary* __loadHandlers;

}

@property (nonatomic,readonly) NSMutableDictionary * _loadHandlers;              //@synthesize _loadHandlers=__loadHandlers - In the implementation block
@property (nonatomic,readonly) NSSet * registeredIdentifiers; 
+(id)providerWithItem:(id)arg1 identifier:(id)arg2 ;
-(id)init;
-(id)itemForIdentifier:(id)arg1 ;
-(void)registerItemForIdentifier:(id)arg1 loadHandler:(/*^block*/id)arg2 ;
-(BOOL)hasItemForIdentifier:(id)arg1 ;
-(NSSet *)registeredIdentifiers;
-(void)registerItem:(id)arg1 forIdentifier:(id)arg2 ;
-(NSMutableDictionary *)_loadHandlers;
@end

