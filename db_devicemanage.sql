-- phpMyAdmin SQL Dump
-- version 4.6.6deb5
-- https://www.phpmyadmin.net/
--
-- Host: localhost:3306
-- Generation Time: Mar 03, 2019 at 11:07 PM
-- Server version: 5.7.25-0ubuntu0.18.04.2
-- PHP Version: 7.2.15-0ubuntu0.18.04.1

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `db_devicemanage`
--

-- --------------------------------------------------------

--
-- Table structure for table `tbl_device`
--

CREATE TABLE `tbl_device` (
  `id` int(11) NOT NULL,
  `name` varchar(10) NOT NULL,
  `type` int(11) NOT NULL,
  `floor` int(11) NOT NULL,
  `status` int(11) NOT NULL,
  `cmd` varchar(20) NOT NULL,
  `dayinweek` int(11) NOT NULL,
  `updated_at` datetime NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Dumping data for table `tbl_device`
--

INSERT INTO `tbl_device` (`id`, `name`, `type`, `floor`, `status`, `cmd`, `dayinweek`, `updated_at`) VALUES
(1, '1', 1, 1, 1, 'CMD_DATA_ST_OUTPUT', 2, '2019-03-03 23:06:26'),
(2, '2', 2, 2, 1, 'CMD_DATA_ST_OUTPUT', 0, '2019-03-01 06:20:23');

-- --------------------------------------------------------

--
-- Table structure for table `tbl_devicetype`
--

CREATE TABLE `tbl_devicetype` (
  `id` int(11) NOT NULL,
  `name` varchar(20) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Dumping data for table `tbl_devicetype`
--

INSERT INTO `tbl_devicetype` (`id`, `name`) VALUES
(1, 'Bóng đèn'),
(2, 'Điều hòa');

-- --------------------------------------------------------

--
-- Table structure for table `tbl_floor`
--

CREATE TABLE `tbl_floor` (
  `id` int(11) NOT NULL,
  `name` varchar(20) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Dumping data for table `tbl_floor`
--

INSERT INTO `tbl_floor` (`id`, `name`) VALUES
(1, 'Tầng 1'),
(2, 'Tầng 2');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `tbl_device`
--
ALTER TABLE `tbl_device`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `tbl_devicetype`
--
ALTER TABLE `tbl_devicetype`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `tbl_floor`
--
ALTER TABLE `tbl_floor`
  ADD PRIMARY KEY (`id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `tbl_device`
--
ALTER TABLE `tbl_device`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=3;
--
-- AUTO_INCREMENT for table `tbl_devicetype`
--
ALTER TABLE `tbl_devicetype`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=3;
--
-- AUTO_INCREMENT for table `tbl_floor`
--
ALTER TABLE `tbl_floor`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=3;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
