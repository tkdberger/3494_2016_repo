#include "SystemsCheck.h"


SystemsCheck::SystemsCheck(bool _right)
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(CommandBase::driveTrain);
	right = _right;
	rightCurrent = 0;
	leftCurrent = 0;
	drivetrain = new DriveTrain();

}

// Called just before this Command runs the first time
void SystemsCheck::Initialize()
{
	SmartDashboard::init();

}


// Called repeatedly when this Command is scheduled to run
void SystemsCheck::Execute()
{
drivetrain->TestDriveTrain(1.0f);
}

// Make this return true when this Command no longer needs to run execute()
bool SystemsCheck::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void SystemsCheck::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SystemsCheck::Interrupted()
{

}
