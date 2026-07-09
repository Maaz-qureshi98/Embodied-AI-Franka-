# Maaz — Panda ROS2 Setup (Franka2)

## Quick Start

1. Unlock robot + Activate FCI:
   https://franka1.robohub.eng.uwaterloo.ca/

2. Start/reconnect Docker container:
   cd ~/robohub/maaz
   ./uw_panda/start.sh panda_ros2_latest

3. Inside container (Terminal 1 — launch MoveIt + RViz):
   cd ~/ws
   source /opt/ros/humble/setup.bash
   source install/setup.sh
   export DISPLAY=:0
   ros2 launch franka_moveit_config moveit.launch.py robot_ip:=franka2

4. New terminal into same container (Terminal 2 — run motion script):
docker exec -it --workdir /home/robohub --user robohub uw_panda_ros2_robohub bash
source /opt/ros/humble/setup.bash
source ~/ws/install/setup.sh
python3 ~/scripts/ab_motion.py


python3 /home/robohub/scripts/pose_logger.py "10 cm cube1.json"

## Notes
- Robot IP/hostname: franka2
- Container name: uw_panda_ros2_robohub
- Backup image (if container lost): maaz_panda_backup
- Scripts: ab_motion.py (A->B motion), pose_logger.py (records panda_link8 pose to json)
- If ws_moveit fails to build: source /opt/ros/humble/setup.bash && colcon build
- moveit_commander / moveit_py NOT available in this setup -- motion uses /compute_ik + FollowJointTrajectory action directly
