/**
 * Your Copyright Here
 *
 * Appcelerator Titanium is Copyright (c) 2009-2010 by Appcelerator, Inc.
 * and licensed under the Apache Public License (version 2)
 */
#import "TiModule.h"

@interface Com0x82KeychainModule : TiModule 
{
}

-(id)getPasswordForService:(id)args;
-(void)setPasswordForService:(id)args;
-(void)deletePasswordForService:(id)args;

@end
